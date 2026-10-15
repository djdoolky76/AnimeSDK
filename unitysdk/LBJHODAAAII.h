#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LBJHODAAAII_BNAOHGNCJJE.h"
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LBJHODAAAII_CCTOR_OFFSET UNITYSDK_OFFSET(0xB5F8EC0)
#define LBJHODAAAII_CJMELJFNFKL_OFFSET UNITYSDK_OFFSET(0xB5F7510)
#define LBJHODAAAII_CTOR_OFFSET UNITYSDK_OFFSET(0xB5F8CA0)
#define LBJHODAAAII_EDCIHLKGGNH_OFFSET UNITYSDK_OFFSET(0xB5F76A0)
#define LBJHODAAAII_GNLHEAGBDJP_OFFSET UNITYSDK_OFFSET(0xB5F7580)
#define LBJHODAAAII_HLIEALDJAKG_OFFSET UNITYSDK_OFFSET(0xB5F6B90)
#define LBJHODAAAII_HLLIMGHEIHI_OFFSET UNITYSDK_OFFSET(0xB5F7C50)
#define LBJHODAAAII_JKKEHLJODPN_OFFSET UNITYSDK_OFFSET(0xB5F8800)
#define LBJHODAAAII_LJOAIGAJGEB_OFFSET UNITYSDK_OFFSET(0xB5F6B00)
#define LBJHODAAAII_LKPFKCEKOFJ_OFFSET UNITYSDK_OFFSET(0xB5F68F0)
#define LBJHODAAAII_LLAAACJBCLJ_OFFSET UNITYSDK_OFFSET(0xB5F8080)
#define LBJHODAAAII_MELPHDNOFGH_OFFSET UNITYSDK_OFFSET(0xB5F7960)
#define LBJHODAAAII_NINDHOGICJD_OFFSET UNITYSDK_OFFSET(0xB5F7790)
#define LBJHODAAAII_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB5F7C10)
#define LBJHODAAAII_NPNGMPJGJHB_OFFSET UNITYSDK_OFFSET(0xB5F86B0)
#define LBJHODAAAII_PGFLJCIDFKE_OFFSET UNITYSDK_OFFSET(0xB5F83A0)

inline static constexpr unsigned int LBJHODAAAII_TypeDefinitionIndex = 47270;

	class LBJHODAAAII : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Object*>*>* LNFAGKMDDLE; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* EHHNMIAHFCI; // 0x18
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Object*>*>* IMOCKKGEHMB; // 0x20
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Boolean>*>* GMLFCKNGLHF; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* APDHIPDCDEE; // 0x30
		::System::Collections::Generic::List_1<::System::Object*>* GJHCOKJAGBH; // 0x38
		::System::Int32 ICLJBKKCPOG; // 0x40
		::System::Int32 KPODIDAJNJJ; // 0x44
		::System::Single FMCAINKKPCL; // 0x48
		::UnityEngine::Vector3 AEBBBLPDDDP; // 0x4C
		::System::Single FDCIFIADELD; // 0x58
		::System::Int32 LCDIMCNJPLL; // 0x5C
		::System::Int32 AJIGOJPKIHM; // 0x60
		static ::System::Single* StaticGet_GDOIDDOHJKC()
		{
			return (::System::Single*)UnitySDK::FromName("", "LBJHODAAAII")->GetStaticField(0x12AA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJHODAAAII_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBJHODAAAII_CCTOR_OFFSET))();
		}

		::System::Void LKPFKCEKOFJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LBJHODAAAII_LKPFKCEKOFJ_OFFSET))(this, a1);
		}

		::System::Void EDCIHLKGGNH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LBJHODAAAII_EDCIHLKGGNH_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 NINDHOGICJD(::LBJHODAAAII_BNAOHGNCJJE a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::LBJHODAAAII_BNAOHGNCJJE))((::PBYTE)hIl2Cpp + LBJHODAAAII_NINDHOGICJD_OFFSET))(this, a1);
		}

		::System::Void MELPHDNOFGH(::UnityEngine::Vector3 a1, ::RPG::GameCore::LevelTriggerInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::GameCore::LevelTriggerInfo*))((::PBYTE)hIl2Cpp + LBJHODAAAII_MELPHDNOFGH_OFFSET))(this, a1, a2);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJHODAAAII_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void LJOAIGAJGEB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LBJHODAAAII_LJOAIGAJGEB_OFFSET))(this, a1);
		}

		::System::Void HLIEALDJAKG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LBJHODAAAII_HLIEALDJAKG_OFFSET))(this, a1);
		}

		::System::Void CJMELJFNFKL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LBJHODAAAII_CJMELJFNFKL_OFFSET))(this, a1);
		}

		::System::Void GNLHEAGBDJP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LBJHODAAAII_GNLHEAGBDJP_OFFSET))(this, a1);
		}

		::System::Boolean HLLIMGHEIHI(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LBJHODAAAII_HLLIMGHEIHI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean LLAAACJBCLJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJHODAAAII_LLAAACJBCLJ_OFFSET))(this);
		}

		::System::Boolean PGFLJCIDFKE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJHODAAAII_PGFLJCIDFKE_OFFSET))(this);
		}

		::System::Boolean NPNGMPJGJHB(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LBJHODAAAII_NPNGMPJGJHB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::System::Object*>* JKKEHLJODPN(::LBJHODAAAII_BNAOHGNCJJE a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::LBJHODAAAII_BNAOHGNCJJE))((::PBYTE)hIl2Cpp + LBJHODAAAII_JKKEHLJODPN_OFFSET))(this, a1);
		}

	};
