#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;
class KOIDMLPJGML;

#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x186D0880)
#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x186D08C0)
#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER___C__REFRESHREWARDVIEW_G__INTO_5_0_OFFSET UNITYSDK_OFFSET(0x186D08D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechResultPageController___c_TypeDefinitionIndex = 86159;

	class UIMechResultPageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIMechResultPageController___c_TypeDefinitionIndex)->GetStaticField(0x35540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::KOIDMLPJGML* _RefreshRewardView_g__Into_5_0(::HGAJKHIMKJP* item)
		{
			return ((::KOIDMLPJGML*(*)(::PVOID, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER___C__REFRESHREWARDVIEW_G__INTO_5_0_OFFSET))(this, item);
		}
	};
}
