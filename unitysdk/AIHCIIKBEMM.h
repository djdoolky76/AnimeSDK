#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EAnimSplitFrameEventType.h"
#include "unitysdk/System/Object.h"
class GELIALJDFBL;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define AIHCIIKBEMM_CCTOR_OFFSET UNITYSDK_OFFSET(0xEB9F5F0)
#define AIHCIIKBEMM_CTOR_OFFSET UNITYSDK_OFFSET(0xEB9ED90)
#define AIHCIIKBEMM_GPBHFGKIDHJ_OFFSET UNITYSDK_OFFSET(0xEB9EF90)
#define AIHCIIKBEMM_NDDBJDEFEGO_OFFSET UNITYSDK_OFFSET(0xEB9EBE0)
#define AIHCIIKBEMM_ODIFMOOCFEP_OFFSET UNITYSDK_OFFSET(0xEB9F210)

inline static constexpr unsigned int AIHCIIKBEMM_TypeDefinitionIndex = 55913;

	class AIHCIIKBEMM : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::GELIALJDFBL*>* CHIPJCHGJGC; // 0x10
		::Il2CppArray<::System::Collections::Generic::Queue_1<::GELIALJDFBL*>*>* MFGMNHOKADJ; // 0x18
		::System::Int32 BLGCIEBLPCD; // 0x20
		static ::Il2CppArray<::System::Type*>** StaticGet_EPDJCKDFDIH()
		{
			return (::Il2CppArray<::System::Type*>**)UnitySDK::FromName("", "AIHCIIKBEMM")->GetStaticField(0x53D30);
		}

		static ::Il2CppArray<::System::Collections::Generic::HashSet_1<::System::Type*>*>** StaticGet_JBGOKIGOHGD()
		{
			return (::Il2CppArray<::System::Collections::Generic::HashSet_1<::System::Type*>*>**)UnitySDK::FromName("", "AIHCIIKBEMM")->GetStaticField(0x53D38);
		}

		static ::Il2CppArray<::System::Type*>** StaticGet_PPFOICKAIKM()
		{
			return (::Il2CppArray<::System::Type*>**)UnitySDK::FromName("", "AIHCIIKBEMM")->GetStaticField(0x53D40);
		}

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AIHCIIKBEMM_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIHCIIKBEMM_CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::EAnimSplitFrameEventType NDDBJDEFEGO(::GELIALJDFBL* a1)
		{
			return ((::RPG::GameCore::EAnimSplitFrameEventType(*)(::GELIALJDFBL*))((::PBYTE)hIl2Cpp + AIHCIIKBEMM_NDDBJDEFEGO_OFFSET))(a1);
		}

		::System::Void GPBHFGKIDHJ(::System::Collections::Generic::List_1<::GELIALJDFBL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GELIALJDFBL*>*))((::PBYTE)hIl2Cpp + AIHCIIKBEMM_GPBHFGKIDHJ_OFFSET))(this, a1);
		}

		::System::Void ODIFMOOCFEP(::System::Collections::Generic::List_1<::GELIALJDFBL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GELIALJDFBL*>*))((::PBYTE)hIl2Cpp + AIHCIIKBEMM_ODIFMOOCFEP_OFFSET))(this, a1);
		}

	};
