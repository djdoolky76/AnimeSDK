#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define PACKAGENAMERECORD_CNKIGAKOFFH_OFFSET UNITYSDK_OFFSET(0xC392A50)
#define PACKAGENAMERECORD_CTOR_OFFSET UNITYSDK_OFFSET(0xC392AF0)
#define PACKAGENAMERECORD_MAJNMDJNOLP_OFFSET UNITYSDK_OFFSET(0xC3929B0)
#define PACKAGENAMERECORD_WRITEANDUPLOADBRANCHDATA_OFFSET UNITYSDK_OFFSET(0xC392420)

inline static constexpr unsigned int PackageNameRecord_TypeDefinitionIndex = 47580;

	class PackageNameRecord : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* IBJAJCDGBGC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACKAGENAMERECORD_CTOR_OFFSET))(this);
		}

		static ::System::Void WriteAndUploadBranchData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PACKAGENAMERECORD_WRITEANDUPLOADBRANCHDATA_OFFSET))();
		}

		static ::System::Void MAJNMDJNOLP(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PACKAGENAMERECORD_MAJNMDJNOLP_OFFSET))(a1, a2);
		}

		static ::System::Collections::IEnumerator* CNKIGAKOFFH(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PACKAGENAMERECORD_CNKIGAKOFFH_OFFSET))(a1, a2);
		}

	};
