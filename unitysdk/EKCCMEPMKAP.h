#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CDDIGGIDLNK;
class LEBPPFADNNF;
namespace RPG::Client::Prop { class ChimeraDuelNpcModelView; }

#define EKCCMEPMKAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x154FEC00)
#define EKCCMEPMKAP_CTOR_OFFSET UNITYSDK_OFFSET(0x154FE3A0)
#define EKCCMEPMKAP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x154FE5E0)
#define EKCCMEPMKAP_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x154FE3B0)

inline static constexpr unsigned int EKCCMEPMKAP_TypeDefinitionIndex = 78255;

	class EKCCMEPMKAP : public ::KNFCEJEJINK
	{
	public:
		::LEBPPFADNNF* MKKLHFCCCNF; // 0x18
		::RPG::Client::Prop::ChimeraDuelNpcModelView* ILAJEHHAPBD; // 0x20
		::CDDIGGIDLNK* EEFMDEHLLFI; // 0x28
		::UnityEngine::Quaternion HBAIICJGPGC; // 0x30
		::UnityEngine::Vector3 OIMMGKNHKOA; // 0x40
		::System::Single FOMCKBAHCFM; // 0x4C
		::System::Boolean CMPCNMBHDBE; // 0x50
		::System::Byte _padding0[0x3];
		::System::Single ANIPBKCEANB; // 0x54
		static ::System::Int32* StaticGet_CEMIJHIHOEN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "EKCCMEPMKAP")->GetStaticField(0xD890);
		}

		static ::System::Int32* StaticGet_HEOKJKOGNBK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "EKCCMEPMKAP")->GetStaticField(0xD894);
		}

		::System::Void _ctor(::LEBPPFADNNF* a1, ::CDDIGGIDLNK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LEBPPFADNNF*, ::CDDIGGIDLNK*))((::PBYTE)hIl2Cpp + EKCCMEPMKAP_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKCCMEPMKAP_CCTOR_OFFSET))();
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKCCMEPMKAP_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EKCCMEPMKAP_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
