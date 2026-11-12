#pragma once
#include "unitysdk/unitysdk.h"
class DOEOMHPIPKE;
class IMJBDFOCECK;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define EODJMJGICJL_CTOR_OFFSET UNITYSDK_OFFSET(0x164CDD70)
#define EODJMJGICJL_HJJNGPOCDNF_OFFSET UNITYSDK_OFFSET(0x164CE200)
#define EODJMJGICJL_KFGOIGAANKI_OFFSET UNITYSDK_OFFSET(0x164CE700)
#define EODJMJGICJL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164CDDA0)
#define EODJMJGICJL_PDNIFOIECLA_OFFSET UNITYSDK_OFFSET(0x164CE620)
#define EODJMJGICJL_PPDJKHMHMNE_OFFSET UNITYSDK_OFFSET(0x164CE0A0)

inline static constexpr unsigned int EODJMJGICJL_TypeDefinitionIndex = 54096;

	class EODJMJGICJL
	{
	public:
		// static const ::System::String* KDIFLHINAAP; // 0x0
		// static const ::System::String* ECLPCACOGHO; // 0x0
		// static const ::System::Object KKBMHBMHPCA; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IMJBDFOCECK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IMJBDFOCECK*))((::PBYTE)hIl2Cpp + EODJMJGICJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EODJMJGICJL_ONTASKBEGIN_OFFSET))(this);
		}

		static ::System::Boolean PPDJKHMHMNE(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EODJMJGICJL_PPDJKHMHMNE_OFFSET))(a1);
		}

		static ::System::Boolean HJJNGPOCDNF(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + EODJMJGICJL_HJJNGPOCDNF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void KFGOIGAANKI(::DOEOMHPIPKE* a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::DOEOMHPIPKE*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + EODJMJGICJL_KFGOIGAANKI_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean PDNIFOIECLA(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + EODJMJGICJL_PDNIFOIECLA_OFFSET))(a1, a2);
		}

	};
