#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChessDirection.h"
#include "unitysdk/System/Object.h"
class PAIJKCEOIJP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HBBDEAKMAGA_CTOR_OFFSET UNITYSDK_OFFSET(0x15BE57D0)
#define HBBDEAKMAGA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BE5840)
#define HBBDEAKMAGA_HLJACLAHEPH_OFFSET UNITYSDK_OFFSET(0x15BE59E0)
#define HBBDEAKMAGA_MOOLLCMKOLP_OFFSET UNITYSDK_OFFSET(0x15BE5BF0)
#define HBBDEAKMAGA_PHFNIBMMLAH_OFFSET UNITYSDK_OFFSET(0x15BE5AE0)

inline static constexpr unsigned int HBBDEAKMAGA_TypeDefinitionIndex = 78559;

	class HBBDEAKMAGA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::PAIJKCEOIJP*>* IKMGNAONFMJ; // 0x10
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::PAIJKCEOIJP*>*>* IKLHJKCLHCF; // 0x18
		::System::Int32 FLBNKDEDJPB; // 0x20
		::System::Int32 EONBOLJMAIH; // 0x24
		::System::Int32 GJENFEMGNAN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBBDEAKMAGA_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBBDEAKMAGA_DISPOSE_OFFSET))(this);
		}

		::System::Void HLJACLAHEPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBBDEAKMAGA_HLJACLAHEPH_OFFSET))(this);
		}

		::System::Void PHFNIBMMLAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBBDEAKMAGA_PHFNIBMMLAH_OFFSET))(this);
		}

		::System::Void MOOLLCMKOLP(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::Prop::ChessDirection a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::Prop::ChessDirection, ::System::Boolean))((::PBYTE)hIl2Cpp + HBBDEAKMAGA_MOOLLCMKOLP_OFFSET))(this, a1, a2, a3, a4);
		}

	};
