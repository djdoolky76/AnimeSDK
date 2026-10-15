#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetAttachmentScale; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JHJHLNDJKNM_CCTOR_OFFSET UNITYSDK_OFFSET(0xB1AF7E0)
#define JHJHLNDJKNM_CTOR_OFFSET UNITYSDK_OFFSET(0xB1AE910)
#define JHJHLNDJKNM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB1AE940)

inline static constexpr unsigned int JHJHLNDJKNM_TypeDefinitionIndex = 55886;

	class JHJHLNDJKNM
	{
	public:
		::System::Boolean LEIGKHEMCGE; // 0x28
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>** StaticGet_OHOKHLEJHKA()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>**)UnitySDK::FromName("", "JHJHLNDJKNM")->GetStaticField(0x11A90);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAttachmentScale* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAttachmentScale*))((::PBYTE)hIl2Cpp + JHJHLNDJKNM_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHJHLNDJKNM_CCTOR_OFFSET))();
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJHLNDJKNM_ONTASKBEGIN_OFFSET))(this);
		}

	};
