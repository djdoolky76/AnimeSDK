#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMKEJLGKEMH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define APEKMFFAEHC_AAGAFBJHOKK_OFFSET UNITYSDK_OFFSET(0x15BA82E0)
#define APEKMFFAEHC_CTOR_OFFSET UNITYSDK_OFFSET(0x15BA7FD0)
#define APEKMFFAEHC_FGLGLHDAEDE_OFFSET UNITYSDK_OFFSET(0x15BA8020)
#define APEKMFFAEHC_HEIPLCBIIBC_OFFSET UNITYSDK_OFFSET(0x15BA8100)

inline static constexpr unsigned int APEKMFFAEHC_TypeDefinitionIndex = 65308;

	class APEKMFFAEHC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FMKEJLGKEMH*>* BLICIKDLKOC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APEKMFFAEHC_CTOR_OFFSET))(this);
		}

		::System::Void FGLGLHDAEDE(::FMKEJLGKEMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMKEJLGKEMH*))((::PBYTE)hIl2Cpp + APEKMFFAEHC_FGLGLHDAEDE_OFFSET))(this, a1);
		}

		::System::Void HEIPLCBIIBC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + APEKMFFAEHC_HEIPLCBIIBC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::FMKEJLGKEMH*>* AAGAFBJHOKK()
		{
			return ((::System::Collections::Generic::List_1<::FMKEJLGKEMH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APEKMFFAEHC_AAGAFBJHOKK_OFFSET))(this);
		}

	};
