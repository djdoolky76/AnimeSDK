#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFAGCMDGHPJ;
namespace System { class Object; }

#define MFAGCMDGHPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA14470)
#define MFAGCMDGHPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA144B0)
#define MFAGCMDGHPJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EA144C0)

inline static constexpr unsigned int MFAGCMDGHPJ___c_TypeDefinitionIndex = 28377;

	class MFAGCMDGHPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BC30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFAGCMDGHPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAGCMDGHPJ___C_CTOR_OFFSET))(this);
		}

		::MFAGCMDGHPJ* __cctor_b__18_0()
		{
			return ((::MFAGCMDGHPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAGCMDGHPJ___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
