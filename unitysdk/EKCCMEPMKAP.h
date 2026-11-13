#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CDDIGGIDLNK;
class LEBPPFADNNF;
namespace RPG::Client::Prop { class ChimeraDuelNpcModelView; }

#define EKCCMEPMKAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x19988450)
#define EKCCMEPMKAP_CTOR_OFFSET UNITYSDK_OFFSET(0x19987BF0)
#define EKCCMEPMKAP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x19987E30)
#define EKCCMEPMKAP_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x19987C00)

inline static constexpr unsigned int EKCCMEPMKAP_TypeDefinitionIndex = 80989;

	class EKCCMEPMKAP : public ::KNFCEJEJINK
	{
	public:
		::RPG::Client::Prop::ChimeraDuelNpcModelView* ILAJEHHAPBD; // 0x18
		::LEBPPFADNNF* MKKLHFCCCNF; // 0x20
		::CDDIGGIDLNK* EEFMDEHLLFI; // 0x28
		::UnityEngine::Quaternion HBAIICJGPGC; // 0x30
		::System::Single FOMCKBAHCFM; // 0x40
		::System::Boolean CMPCNMBHDBE; // 0x44
		::System::Byte _padding0[0x3];
		::System::Single ANIPBKCEANB; // 0x48
		::UnityEngine::Vector3 OIMMGKNHKOA; // 0x4C
		static ::System::Int32* StaticGet_CEMIJHIHOEN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "EKCCMEPMKAP")->GetStaticField(0x6710);
		}

		static ::System::Int32* StaticGet_HEOKJKOGNBK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "EKCCMEPMKAP")->GetStaticField(0x6714);
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
