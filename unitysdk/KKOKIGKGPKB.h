#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/LightTypeID.h"
#include "unitysdk/System/Object.h"
class GPHOPKGECOK;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KKOKIGKGPKB_CCTOR_OFFSET UNITYSDK_OFFSET(0xB4D3510)
#define KKOKIGKGPKB_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB4D0940)
#define KKOKIGKGPKB_CTOR_OFFSET UNITYSDK_OFFSET(0xB4D0790)
#define KKOKIGKGPKB_DECHLNPJIBO_OFFSET UNITYSDK_OFFSET(0xB4D0F10)
#define KKOKIGKGPKB_EEOBCLMKNEG_OFFSET UNITYSDK_OFFSET(0xB4D0AF0)
#define KKOKIGKGPKB_GACEJEGKNBH_OFFSET UNITYSDK_OFFSET(0xB4D28B0)
#define KKOKIGKGPKB_ICJGMELMLGO_OFFSET UNITYSDK_OFFSET(0xB4D0720)
#define KKOKIGKGPKB_INOAPBODBBB_OFFSET UNITYSDK_OFFSET(0xB4D2090)
#define KKOKIGKGPKB_LCEEAAHKDDF_OFFSET UNITYSDK_OFFSET(0xB4D2DE0)
#define KKOKIGKGPKB_MIKGKCLMGLE_OFFSET UNITYSDK_OFFSET(0xB4D0D20)
#define KKOKIGKGPKB_MPLPBCAHCIB_OFFSET UNITYSDK_OFFSET(0xB4D1D10)
#define KKOKIGKGPKB_OMFIMHOFLMN_OFFSET UNITYSDK_OFFSET(0xB4D2A70)

inline static constexpr unsigned int KKOKIGKGPKB_TypeDefinitionIndex = 49153;

	class KKOKIGKGPKB : public ::System::Object
	{
	public:
		::System::String* PFCGLCPIMIN; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>* BAHADOKJIPI; // 0x18
		::GPHOPKGECOK* NHGMGHBIIDI; // 0x20
		::GPHOPKGECOK* BIKKABLFFIM; // 0x28
		static ::System::String** StaticGet_BKDPIGHCNGD()
		{
			return (::System::String**)UnitySDK::FromName("", "KKOKIGKGPKB")->GetStaticField(0x548D0);
		}

		static ::System::String** StaticGet_JALLELCCGMH()
		{
			return (::System::String**)UnitySDK::FromName("", "KKOKIGKGPKB")->GetStaticField(0x548D8);
		}

		static ::System::String** StaticGet_OMEDIECPPNI()
		{
			return (::System::String**)UnitySDK::FromName("", "KKOKIGKGPKB")->GetStaticField(0x548E0);
		}

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KKOKIGKGPKB_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOKIGKGPKB_CTOR_1_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKOKIGKGPKB_CCTOR_OFFSET))();
		}

		::System::Void ICJGMELMLGO(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + KKOKIGKGPKB_ICJGMELMLGO_OFFSET))(this, a1, a2);
		}

		::System::Void EEOBCLMKNEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOKIGKGPKB_EEOBCLMKNEG_OFFSET))(this);
		}

		::System::Void MIKGKCLMGLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOKIGKGPKB_MIKGKCLMGLE_OFFSET))(this);
		}

		::GPHOPKGECOK* INOAPBODBBB(::System::Type* a1)
		{
			return ((::GPHOPKGECOK*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + KKOKIGKGPKB_INOAPBODBBB_OFFSET))(this, a1);
		}

		::System::Void GACEJEGKNBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOKIGKGPKB_GACEJEGKNBH_OFFSET))(this);
		}

		::GPHOPKGECOK* DECHLNPJIBO()
		{
			return ((::GPHOPKGECOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOKIGKGPKB_DECHLNPJIBO_OFFSET))(this);
		}

		::GPHOPKGECOK* OMFIMHOFLMN(::System::Type* a1, ::ScenenLightManager::LightTypeID a2)
		{
			return ((::GPHOPKGECOK*(*)(::PVOID, ::System::Type*, ::ScenenLightManager::LightTypeID))((::PBYTE)hIl2Cpp + KKOKIGKGPKB_OMFIMHOFLMN_OFFSET))(this, a1, a2);
		}

		::GPHOPKGECOK* MPLPBCAHCIB()
		{
			return ((::GPHOPKGECOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOKIGKGPKB_MPLPBCAHCIB_OFFSET))(this);
		}

		static ::System::Void LCEEAAHKDDF(::System::Type* a1)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + KKOKIGKGPKB_LCEEAAHKDDF_OFFSET))(a1);
		}

	};
