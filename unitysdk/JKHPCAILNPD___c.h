#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGFFMOLFPEF;
class LHGAEBPLFFK;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define JKHPCAILNPD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C53B2C0)
#define JKHPCAILNPD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C53B300)
#define JKHPCAILNPD___C___REFRESHFULLLINEBUFFEFFECT_B__26_0_OFFSET UNITYSDK_OFFSET(0x1C53B310)
#define JKHPCAILNPD___C___REFRESHFULLLINEBUFFEFFECT_B__26_1_OFFSET UNITYSDK_OFFSET(0x1C53B380)

inline static constexpr unsigned int JKHPCAILNPD___c_TypeDefinitionIndex = 41754;

	class JKHPCAILNPD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22080);
		}

		static ::System::Func_2<::LHGAEBPLFFK*, ::AGFFMOLFPEF*>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::LHGAEBPLFFK*, ::AGFFMOLFPEF*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22088);
		}

		static ::System::Func_2<::AGFFMOLFPEF*, ::System::Boolean>** StaticGet___9__26_1()
		{
			return (::System::Func_2<::AGFFMOLFPEF*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKHPCAILNPD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHPCAILNPD___C_CTOR_OFFSET))(this);
		}

		::AGFFMOLFPEF* __RefreshFullLineBuffEffect_b__26_0(::LHGAEBPLFFK* a1)
		{
			return ((::AGFFMOLFPEF*(*)(::PVOID, ::LHGAEBPLFFK*))((::PBYTE)hIl2Cpp + JKHPCAILNPD___C___REFRESHFULLLINEBUFFEFFECT_B__26_0_OFFSET))(this, a1);
		}

		::System::Boolean __RefreshFullLineBuffEffect_b__26_1(::AGFFMOLFPEF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AGFFMOLFPEF*))((::PBYTE)hIl2Cpp + JKHPCAILNPD___C___REFRESHFULLLINEBUFFEFFECT_B__26_1_OFFSET))(this, a1);
		}

	};
