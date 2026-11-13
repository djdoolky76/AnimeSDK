#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetAttachmentVisibility; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NGGKJBIIFLO_CCTOR_OFFSET UNITYSDK_OFFSET(0x18E8AB90)
#define NGGKJBIIFLO_CTOR_OFFSET UNITYSDK_OFFSET(0x18E8A2A0)
#define NGGKJBIIFLO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18E8A2D0)

inline static constexpr unsigned int NGGKJBIIFLO_TypeDefinitionIndex = 57091;

	class NGGKJBIIFLO
	{
	public:
		::System::Boolean LEIGKHEMCGE; // 0x28
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>** StaticGet_OHOKHLEJHKA()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>**)UnitySDK::FromName("", "NGGKJBIIFLO")->GetStaticField(0x375B0);
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
