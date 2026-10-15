#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PLMJFBPGLAK.h"
class BKIOIPNACGF;
class JNKDKJGMMJF;
class MGGBPKANFOA;
namespace System { class Object; }

#define JNKDKJGMMJF_CTOR_OFFSET UNITYSDK_OFFSET(0xB282940)
#define JNKDKJGMMJF_KMJNGGGPJPF_OFFSET UNITYSDK_OFFSET(0xB2829C0)
#define JNKDKJGMMJF_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0xB282E30)
#define JNKDKJGMMJF_OOBADKHILIH_OFFSET UNITYSDK_OFFSET(0xB282FF0)
#define JNKDKJGMMJF_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0xB282F00)

inline static constexpr unsigned int JNKDKJGMMJF_TypeDefinitionIndex = 67184;

	class JNKDKJGMMJF : public ::PLMJFBPGLAK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKDKJGMMJF_CTOR_OFFSET))(this);
		}

		static ::JNKDKJGMMJF* KMJNGGGPJPF(::MGGBPKANFOA* a1)
		{
			return ((::JNKDKJGMMJF*(*)(::MGGBPKANFOA*))((::PBYTE)hIl2Cpp + JNKDKJGMMJF_KMJNGGGPJPF_OFFSET))(a1);
		}

		::JNKDKJGMMJF* NBHCPBBGAKA()
		{
			return ((::JNKDKJGMMJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKDKJGMMJF_NBHCPBBGAKA_OFFSET))(this);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKDKJGMMJF_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::BKIOIPNACGF* OOBADKHILIH()
		{
			return ((::BKIOIPNACGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKDKJGMMJF_OOBADKHILIH_OFFSET))(this);
		}

	};
