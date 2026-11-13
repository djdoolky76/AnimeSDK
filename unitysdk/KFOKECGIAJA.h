#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JJAABNBJMEH.h"
class HEFMJGIINFM;
class KFOKECGIAJA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KFOKECGIAJA_AKMPHAFJDGJ_OFFSET UNITYSDK_OFFSET(0x1F417D50)
#define KFOKECGIAJA_BKCOIIPPJKH_OFFSET UNITYSDK_OFFSET(0x1F417BF0)
#define KFOKECGIAJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F417F00)
#define KFOKECGIAJA_GEGLINDHGPF_OFFSET UNITYSDK_OFFSET(0x1F417DC0)
#define KFOKECGIAJA_HDAHODEDEOP_OFFSET UNITYSDK_OFFSET(0x1F417980)
#define KFOKECGIAJA_JCFAIAFOBCC_OFFSET UNITYSDK_OFFSET(0x1F4178C0)
#define KFOKECGIAJA_NKPGLGLHHKD_OFFSET UNITYSDK_OFFSET(0x1F417C10)
#define KFOKECGIAJA_NMDDMMILMJL_OFFSET UNITYSDK_OFFSET(0x1F418000)
#define KFOKECGIAJA_PLIKPOOOCLB_OFFSET UNITYSDK_OFFSET(0x1F417B50)

inline static constexpr unsigned int KFOKECGIAJA_TypeDefinitionIndex = 10373;

	class KFOKECGIAJA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* GKGAKIADDCD; // 0x10
		::System::Collections::Generic::List_1<::System::Byte>* NLJFNCBAGJB; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* NMBCAEAPIPN; // 0x20
		static ::KFOKECGIAJA** StaticGet_EMLNOINPICJ()
		{
			return (::KFOKECGIAJA**)UnitySDK::FromName("", "KFOKECGIAJA")->GetStaticField(0x342D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOKECGIAJA_CTOR_OFFSET))(this);
		}

		::System::Void JCFAIAFOBCC(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KFOKECGIAJA_JCFAIAFOBCC_OFFSET))(this, a1);
		}

		::System::Byte BKCOIIPPJKH(::HEFMJGIINFM* a1)
		{
			return ((::System::Byte(*)(::PVOID, ::HEFMJGIINFM*))((::PBYTE)hIl2Cpp + KFOKECGIAJA_BKCOIIPPJKH_OFFSET))(this, a1);
		}

		::System::Byte HDAHODEDEOP(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Byte(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KFOKECGIAJA_HDAHODEDEOP_OFFSET))(this, a1);
		}

		::System::Byte NKPGLGLHHKD(::System::String* a1)
		{
			return ((::System::Byte(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KFOKECGIAJA_NKPGLGLHHKD_OFFSET))(this, a1);
		}

		::System::Void PLIKPOOOCLB(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KFOKECGIAJA_PLIKPOOOCLB_OFFSET))(this, a1);
		}

		::JJAABNBJMEH AKMPHAFJDGJ()
		{
			return ((::JJAABNBJMEH(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOKECGIAJA_AKMPHAFJDGJ_OFFSET))(this);
		}

		static ::KFOKECGIAJA* GEGLINDHGPF()
		{
			return ((::KFOKECGIAJA*(*)())((::PBYTE)hIl2Cpp + KFOKECGIAJA_GEGLINDHGPF_OFFSET))();
		}

		::System::Void NMDDMMILMJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOKECGIAJA_NMDDMMILMJL_OFFSET))(this);
		}

	};
