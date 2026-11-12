#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBNPGDPCGDJ;
class WaveSimPanel;
namespace RPG::Client::DynamicFloatingObject { class DynamicFloatingObject; }
namespace RPG::Client::DynamicFloatingObject { class WaterSimOverrideParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HBNPGDPCGDJ_ANHEGLLNFJE_OFFSET UNITYSDK_OFFSET(0x16B55330)
#define HBNPGDPCGDJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x16B55A30)
#define HBNPGDPCGDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16B54B70)
#define HBNPGDPCGDJ_ENADMKAJNBD_OFFSET UNITYSDK_OFFSET(0x16B54BC0)
#define HBNPGDPCGDJ_EOAEHJHKIBC_OFFSET UNITYSDK_OFFSET(0x16B54C10)
#define HBNPGDPCGDJ_FMJPMFEDIJL_OFFSET UNITYSDK_OFFSET(0x16B54A20)
#define HBNPGDPCGDJ_FMPAOKGPMNG_OFFSET UNITYSDK_OFFSET(0x16B55190)
#define HBNPGDPCGDJ_GBDJNGPCOLM_OFFSET UNITYSDK_OFFSET(0x16B54D50)
#define HBNPGDPCGDJ_NADGINOCDIB_OFFSET UNITYSDK_OFFSET(0x16B553C0)
#define HBNPGDPCGDJ_NOHBFKBBGPL_OFFSET UNITYSDK_OFFSET(0x16B54F70)
#define HBNPGDPCGDJ_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x16B55840)
#define HBNPGDPCGDJ_PMFJEAIKHKA_OFFSET UNITYSDK_OFFSET(0x16B55220)

inline static constexpr unsigned int HBNPGDPCGDJ_TypeDefinitionIndex = 75693;

	class HBNPGDPCGDJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::DynamicFloatingObject::DynamicFloatingObject*>* AHIPHBAEDPM; // 0x10
		::RPG::Client::DynamicFloatingObject::WaterSimOverrideParam* MDGBEEMINOA; // 0x18
		::WaveSimPanel* OELCBNCFOEA; // 0x20
		::System::Boolean KKCFCJFAAKA; // 0x28
		static ::HBNPGDPCGDJ** StaticGet_EMLNOINPICJ()
		{
			return (::HBNPGDPCGDJ**)UnitySDK::FromName("", "HBNPGDPCGDJ")->GetStaticField(0x72F50);
		}

		static ::System::Int32* StaticGet_MMNNADCNGLC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HBNPGDPCGDJ")->GetStaticField(0x15FD0);
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
