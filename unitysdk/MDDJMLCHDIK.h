#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
class FHLLIHAHKHF;
class JNKMKNJACFP;
class OBJMDBDALGG;
namespace System { class Object; }
namespace System { class String; }

#define MDDJMLCHDIK_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB89FA10)
#define MDDJMLCHDIK_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB89FBD0)
#define MDDJMLCHDIK_BHBCLBBOPFL_OFFSET UNITYSDK_OFFSET(0xB89F300)
#define MDDJMLCHDIK_BNLPKDGPNGJ_OFFSET UNITYSDK_OFFSET(0xB89F3A0)
#define MDDJMLCHDIK_CELHEKOFLHF_OFFSET UNITYSDK_OFFSET(0xB89F190)
#define MDDJMLCHDIK_CHGJHJJKOJH_OFFSET UNITYSDK_OFFSET(0xB89F550)
#define MDDJMLCHDIK_CTOR_OFFSET UNITYSDK_OFFSET(0xB89ECD0)
#define MDDJMLCHDIK_EJPHKAJJCOG_OFFSET UNITYSDK_OFFSET(0xB89F410)
#define MDDJMLCHDIK_GBGALIOKBHN_OFFSET UNITYSDK_OFFSET(0xB89F760)
#define MDDJMLCHDIK_HCEMCPOADFI_OFFSET UNITYSDK_OFFSET(0xB89F980)
#define MDDJMLCHDIK_HCGHKGHCPCA_OFFSET UNITYSDK_OFFSET(0xB89F860)
#define MDDJMLCHDIK_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0xB89F4B0)
#define MDDJMLCHDIK_MFEIEBLNILG_OFFSET UNITYSDK_OFFSET(0xB89F8F0)
#define MDDJMLCHDIK_NIOPMOPLOFP_OFFSET UNITYSDK_OFFSET(0xB89F1F0)
#define MDDJMLCHDIK_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0xB89ED10)
#define MDDJMLCHDIK__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xB89ED80)
#define MDDJMLCHDIK__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xB89F130)

	class MDDJMLCHDIK : public ::RPG::Client::UIController
	{
	public:
		::JNKMKNJACFP* NAAIFFMPOIE; // 0x190
		::FHLLIHAHKHF* PLGCMJNOFEO; // 0x198
		::OBJMDBDALGG* ABKIJMNGDIO; // 0x1A0
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
