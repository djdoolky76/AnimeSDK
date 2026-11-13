#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
class FHLLIHAHKHF;
class JNKMKNJACFP;
class OBJMDBDALGG;
namespace System { class Object; }
namespace System { class String; }

#define MDDJMLCHDIK_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x183D5D50)
#define MDDJMLCHDIK_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x183D5F10)
#define MDDJMLCHDIK_BHBCLBBOPFL_OFFSET UNITYSDK_OFFSET(0x183D5640)
#define MDDJMLCHDIK_BNLPKDGPNGJ_OFFSET UNITYSDK_OFFSET(0x183D56E0)
#define MDDJMLCHDIK_CELHEKOFLHF_OFFSET UNITYSDK_OFFSET(0x183D54E0)
#define MDDJMLCHDIK_CHGJHJJKOJH_OFFSET UNITYSDK_OFFSET(0x183D5890)
#define MDDJMLCHDIK_CTOR_OFFSET UNITYSDK_OFFSET(0x183D5020)
#define MDDJMLCHDIK_EJPHKAJJCOG_OFFSET UNITYSDK_OFFSET(0x183D5750)
#define MDDJMLCHDIK_GBGALIOKBHN_OFFSET UNITYSDK_OFFSET(0x183D5AA0)
#define MDDJMLCHDIK_HCEMCPOADFI_OFFSET UNITYSDK_OFFSET(0x183D5CC0)
#define MDDJMLCHDIK_HCGHKGHCPCA_OFFSET UNITYSDK_OFFSET(0x183D5BA0)
#define MDDJMLCHDIK_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0x183D57F0)
#define MDDJMLCHDIK_MFEIEBLNILG_OFFSET UNITYSDK_OFFSET(0x183D5C30)
#define MDDJMLCHDIK_NIOPMOPLOFP_OFFSET UNITYSDK_OFFSET(0x183D5540)
#define MDDJMLCHDIK_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x183D5060)
#define MDDJMLCHDIK__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x183D50D0)
#define MDDJMLCHDIK__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x183D5480)

inline static constexpr unsigned int MDDJMLCHDIK_TypeDefinitionIndex = 74276;

	class MDDJMLCHDIK : public ::RPG::Client::UIController
	{
	public:
		::OBJMDBDALGG* ABKIJMNGDIO; // 0x190
		::FHLLIHAHKHF* PLGCMJNOFEO; // 0x198
		::JNKMKNJACFP* NAAIFFMPOIE; // 0x1A0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_CTOR_OFFSET))(this);
		}

		::System::String* ViewPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_VIEWPREFABPATH_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDJMLCHDIK__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDJMLCHDIK__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void CELHEKOFLHF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_CELHEKOFLHF_OFFSET))(this, a1);
		}

		::System::Void NIOPMOPLOFP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_NIOPMOPLOFP_OFFSET))(this, a1);
		}

		::System::Void BHBCLBBOPFL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_BHBCLBBOPFL_OFFSET))(this, a1);
		}

		::System::Void EJPHKAJJCOG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_EJPHKAJJCOG_OFFSET))(this, a1);
		}

		::System::Void LBPHINKONCH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_LBPHINKONCH_OFFSET))(this, a1);
		}

		::System::Void BNLPKDGPNGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_BNLPKDGPNGJ_OFFSET))(this);
		}

		::System::Boolean CHGJHJJKOJH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_CHGJHJJKOJH_OFFSET))(this);
		}

		::System::Void GBGALIOKBHN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_GBGALIOKBHN_OFFSET))(this, a1);
		}

		::System::Void HCGHKGHCPCA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_HCGHKGHCPCA_OFFSET))(this, a1);
		}

		::System::Void MFEIEBLNILG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_MFEIEBLNILG_OFFSET))(this, a1);
		}

		::System::Void HCEMCPOADFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_HCEMCPOADFI_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
