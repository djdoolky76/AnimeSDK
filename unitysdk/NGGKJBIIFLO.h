#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetAttachmentVisibility; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NGGKJBIIFLO_CCTOR_OFFSET UNITYSDK_OFFSET(0xBBA0D70)
#define NGGKJBIIFLO_CTOR_OFFSET UNITYSDK_OFFSET(0xBBA0480)
#define NGGKJBIIFLO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBA04B0)

inline static constexpr unsigned int NGGKJBIIFLO_TypeDefinitionIndex = 55888;

	class NGGKJBIIFLO
	{
	public:
		::System::Boolean LEIGKHEMCGE; // 0x28
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>** StaticGet_OHOKHLEJHKA()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>**)UnitySDK::FromName("", "NGGKJBIIFLO")->GetStaticField(0x34C10);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAttachmentVisibility* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAttachmentVisibility*))((::PBYTE)hIl2Cpp + NGGKJBIIFLO_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGGKJBIIFLO_CCTOR_OFFSET))();
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGGKJBIIFLO_ONTASKBEGIN_OFFSET))(this);
		}

	};
