#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
class GHHJNCOAIJF;
namespace System { class String; }

#define FPNCAGDDHPO_CTOR_OFFSET UNITYSDK_OFFSET(0x16854100)
#define FPNCAGDDHPO_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x16854170)

inline static constexpr unsigned int FPNCAGDDHPO_TypeDefinitionIndex = 71300;

	class FPNCAGDDHPO : public ::System::Exception
	{
	public:
		::GHHJNCOAIJF* _Request_k__BackingField; // 0x88
		::System::Void _ctor(::GHHJNCOAIJF* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHHJNCOAIJF*, ::System::String*))((::PBYTE)hIl2Cpp + FPNCAGDDHPO_CTOR_OFFSET))(this, a1, a2);
		}

		::GHHJNCOAIJF* get_Request()
		{
			return ((::GHHJNCOAIJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNCAGDDHPO_GET_REQUEST_OFFSET))(this);
		}

	};
