#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class NDEKPFNFNDD;
namespace RPG::GameCore { class TargetSeqOperation; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NLACAMFAEDK_AOEPDHEOGOA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xBC60190)
#define NLACAMFAEDK_AOEPDHEOGOA_CTOR_OFFSET UNITYSDK_OFFSET(0xBC600A0)
#define NLACAMFAEDK_AOEPDHEOGOA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xBC601C0)
#define NLACAMFAEDK_AOEPDHEOGOA_INVOKE_OFFSET UNITYSDK_OFFSET(0xBC585B0)

inline static constexpr unsigned int NLACAMFAEDK_AOEPDHEOGOA_TypeDefinitionIndex = 55948;

	class NLACAMFAEDK_AOEPDHEOGOA : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NLACAMFAEDK_AOEPDHEOGOA_CTOR_OFFSET))(this, a1, a2);
		}

		::NDEKPFNFNDD* Invoke(::RPG::GameCore::TargetSeqOperation* a1)
		{
			return ((::NDEKPFNFNDD*(*)(::PVOID, ::RPG::GameCore::TargetSeqOperation*))((::PBYTE)hIl2Cpp + NLACAMFAEDK_AOEPDHEOGOA_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::TargetSeqOperation* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::TargetSeqOperation*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NLACAMFAEDK_AOEPDHEOGOA_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::NDEKPFNFNDD* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::NDEKPFNFNDD*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NLACAMFAEDK_AOEPDHEOGOA_ENDINVOKE_OFFSET))(this, a1);
		}

	};
