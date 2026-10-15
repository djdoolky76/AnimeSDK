#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBNPGDPCGDJ;
class WaveSimPanel;
namespace RPG::Client::DynamicFloatingObject { class DynamicFloatingObject; }
namespace RPG::Client::DynamicFloatingObject { class WaterSimOverrideParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HBNPGDPCGDJ_ANHEGLLNFJE_OFFSET UNITYSDK_OFFSET(0x15C133D0)
#define HBNPGDPCGDJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x15C13AD0)
#define HBNPGDPCGDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15C12C10)
#define HBNPGDPCGDJ_ENADMKAJNBD_OFFSET UNITYSDK_OFFSET(0x15C12C60)
#define HBNPGDPCGDJ_EOAEHJHKIBC_OFFSET UNITYSDK_OFFSET(0x15C12CB0)
#define HBNPGDPCGDJ_FMJPMFEDIJL_OFFSET UNITYSDK_OFFSET(0x15C12AC0)
#define HBNPGDPCGDJ_FMPAOKGPMNG_OFFSET UNITYSDK_OFFSET(0x15C13230)
#define HBNPGDPCGDJ_GBDJNGPCOLM_OFFSET UNITYSDK_OFFSET(0x15C12DF0)
#define HBNPGDPCGDJ_NADGINOCDIB_OFFSET UNITYSDK_OFFSET(0x15C13460)
#define HBNPGDPCGDJ_NOHBFKBBGPL_OFFSET UNITYSDK_OFFSET(0x15C13010)
#define HBNPGDPCGDJ_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15C138E0)
#define HBNPGDPCGDJ_PMFJEAIKHKA_OFFSET UNITYSDK_OFFSET(0x15C132C0)

	class HBNPGDPCGDJ : public ::System::Object
	{
	public:
		::WaveSimPanel* OELCBNCFOEA; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::DynamicFloatingObject::DynamicFloatingObject*>* AHIPHBAEDPM; // 0x18
		::RPG::Client::DynamicFloatingObject::WaterSimOverrideParam* MDGBEEMINOA; // 0x20
		::System::Boolean KKCFCJFAAKA; // 0x28
		static ::HBNPGDPCGDJ** StaticGet_EMLNOINPICJ()
		{
			return (::HBNPGDPCGDJ**)UnitySDK::FromName("", "HBNPGDPCGDJ")->GetStaticField(0x6E8F0);
		}

		static ::System::Int32* StaticGet_MMNNADCNGLC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HBNPGDPCGDJ")->GetStaticField(0x155C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNPGDPCGDJ_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBNPGDPCGDJ_CCTOR_OFFSET))();
		}

		static ::HBNPGDPCGDJ* FMJPMFEDIJL()
		{
			return ((::HBNPGDPCGDJ*(*)())((::PBYTE)hIl2Cpp + HBNPGDPCGDJ_FMJPMFEDIJL_OFFSET))();
		}

		::System::Int32 ENADMKAJNBD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNPGDPCGDJ_ENADMKAJNBD_OFFSET))(this);
		}

		::System::Void EOAEHJHKIBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNPGDPCGDJ_EOAEHJHKIBC_OFFSET))(this);
		}

		::System::Void GBDJNGPCOLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNPGDPCGDJ_GBDJNGPCOLM_OFFSET))(this);
		}

		::System::Void NOHBFKBBGPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNPGDPCGDJ_NOHBFKBBGPL_OFFSET))(this);
		}

		::System::Void FMPAOKGPMNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNPGDPCGDJ_FMPAOKGPMNG_OFFSET))(this);
		}

		::System::Void PMFJEAIKHKA(::RPG::Client::DynamicFloatingObject::DynamicFloatingObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DynamicFloatingObject::DynamicFloatingObject*))((::PBYTE)hIl2Cpp + HBNPGDPCGDJ_PMFJEAIKHKA_OFFSET))(this, a1);
		}

		::System::Void ANHEGLLNFJE(::RPG::Client::DynamicFloatingObject::DynamicFloatingObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DynamicFloatingObject::DynamicFloatingObject*))((::PBYTE)hIl2Cpp + HBNPGDPCGDJ_ANHEGLLNFJE_OFFSET))(this, a1);
		}

		::System::Void NADGINOCDIB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HBNPGDPCGDJ_NADGINOCDIB_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNPGDPCGDJ_PAGKOAEOLKA_OFFSET))(this);
		}

	};
