#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;
class NBJLLEBFGPD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NANAIOBBDOE_CBIOMOBPMDK_OFFSET UNITYSDK_OFFSET(0xBAA24D0)
#define NANAIOBBDOE_CTOR_OFFSET UNITYSDK_OFFSET(0xBAA2650)
#define NANAIOBBDOE_DLGFMPNEHGO_OFFSET UNITYSDK_OFFSET(0xBAA23D0)
#define NANAIOBBDOE_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xBAA1CF0)

inline static constexpr unsigned int NANAIOBBDOE_TypeDefinitionIndex = 77591;

	class NANAIOBBDOE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NANAIOBBDOE_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::System::Int32 a1, ::KAKADGHNMFK* a2, ::KAKADGHNMFK* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::KAKADGHNMFK*, ::KAKADGHNMFK*, ::System::Int32))((::PBYTE)hIl2Cpp + NANAIOBBDOE_PKADDEPKJFN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean DLGFMPNEHGO(::KAKADGHNMFK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + NANAIOBBDOE_DLGFMPNEHGO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::NBJLLEBFGPD*>* CBIOMOBPMDK(::System::String* a1, ::KAKADGHNMFK* a2)
		{
			return ((::System::Collections::Generic::List_1<::NBJLLEBFGPD*>*(*)(::PVOID, ::System::String*, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + NANAIOBBDOE_CBIOMOBPMDK_OFFSET))(this, a1, a2);
		}

	};
