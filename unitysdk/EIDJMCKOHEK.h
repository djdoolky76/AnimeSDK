#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPMFOHDCMFF.h"
class KCMGAIFFBPL;
class MDDJNELCOMK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define EIDJMCKOHEK_AJLCJJOOOOE_OFFSET UNITYSDK_OFFSET(0x154BEF00)
#define EIDJMCKOHEK_BBCHOBKBAED_OFFSET UNITYSDK_OFFSET(0x154BEF50)
#define EIDJMCKOHEK_CTOR_OFFSET UNITYSDK_OFFSET(0x154BF300)
#define EIDJMCKOHEK_GGAHGOJJBIP_OFFSET UNITYSDK_OFFSET(0x154BEE00)
#define EIDJMCKOHEK_GMFCFCGIOEB_OFFSET UNITYSDK_OFFSET(0x154BF100)
#define EIDJMCKOHEK_OFNNKAKNCFB_OFFSET UNITYSDK_OFFSET(0x154BF070)
#define EIDJMCKOHEK_ONRETURN_OFFSET UNITYSDK_OFFSET(0x154BEDB0)
#define EIDJMCKOHEK__ONBIND_OFFSET UNITYSDK_OFFSET(0x154BED20)

inline static constexpr unsigned int EIDJMCKOHEK_TypeDefinitionIndex = 71753;

	class EIDJMCKOHEK : public ::GPMFOHDCMFF
	{
	public:
		::UnityEngine::Animator* CFNGLMDMENE; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDJMCKOHEK_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDJMCKOHEK__ONBIND_OFFSET))(this);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDJMCKOHEK_ONRETURN_OFFSET))(this);
		}

		::System::Void GGAHGOJJBIP(::KCMGAIFFBPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCMGAIFFBPL*))((::PBYTE)hIl2Cpp + EIDJMCKOHEK_GGAHGOJJBIP_OFFSET))(this, a1);
		}

		::System::Void AJLCJJOOOOE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EIDJMCKOHEK_AJLCJJOOOOE_OFFSET))(this, a1);
		}

		::System::Void BBCHOBKBAED(::System::Collections::Generic::List_1<::MDDJNELCOMK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MDDJNELCOMK*>*))((::PBYTE)hIl2Cpp + EIDJMCKOHEK_BBCHOBKBAED_OFFSET))(this, a1);
		}

		::System::Void OFNNKAKNCFB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EIDJMCKOHEK_OFNNKAKNCFB_OFFSET))(this, a1);
		}

		::System::Void GMFCFCGIOEB(::UnityEngine::Animator* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + EIDJMCKOHEK_GMFCFCGIOEB_OFFSET))(this, a1, a2);
		}

	};
