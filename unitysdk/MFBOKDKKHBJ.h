#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJLMLFDJLLH;
class FFCGHKGDAJF;
class MFBOKDKKHBJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MFBOKDKKHBJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB8EC9C0)
#define MFBOKDKKHBJ_CMOCMIKDDNH_OFFSET UNITYSDK_OFFSET(0xB8ECBE0)
#define MFBOKDKKHBJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB8ECB20)
#define MFBOKDKKHBJ_FHMKABILAJK_OFFSET UNITYSDK_OFFSET(0xB8ECA40)
#define MFBOKDKKHBJ_GEMLHAGDHKA_OFFSET UNITYSDK_OFFSET(0xB8ECB60)
#define MFBOKDKKHBJ_GET_EDGES_OFFSET UNITYSDK_OFFSET(0xB8EC860)
#define MFBOKDKKHBJ_POKBKHGHHIN_OFFSET UNITYSDK_OFFSET(0xB8EC870)

inline static constexpr unsigned int MFBOKDKKHBJ_TypeDefinitionIndex = 74564;

	class MFBOKDKKHBJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::EJLMLFDJLLH*>* _Edges_k__BackingField; // 0x10
		::FFCGHKGDAJF* DCOPELFHOLO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBOKDKKHBJ_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::EJLMLFDJLLH*>* get_Edges()
		{
			return ((::System::Collections::Generic::List_1<::EJLMLFDJLLH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBOKDKKHBJ_GET_EDGES_OFFSET))(this);
		}

		static ::MFBOKDKKHBJ* POKBKHGHHIN(::System::Single a1)
		{
			return ((::MFBOKDKKHBJ*(*)(::System::Single))((::PBYTE)hIl2Cpp + MFBOKDKKHBJ_POKBKHGHHIN_OFFSET))(a1);
		}

		static ::MFBOKDKKHBJ* BPLPBPMEODA(::FFCGHKGDAJF* a1)
		{
			return ((::MFBOKDKKHBJ*(*)(::FFCGHKGDAJF*))((::PBYTE)hIl2Cpp + MFBOKDKKHBJ_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void FHMKABILAJK(::EJLMLFDJLLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJLMLFDJLLH*))((::PBYTE)hIl2Cpp + MFBOKDKKHBJ_FHMKABILAJK_OFFSET))(this, a1);
		}

		::System::Void GEMLHAGDHKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBOKDKKHBJ_GEMLHAGDHKA_OFFSET))(this);
		}

		::System::Single CMOCMIKDDNH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBOKDKKHBJ_CMOCMIKDDNH_OFFSET))(this);
		}

	};
