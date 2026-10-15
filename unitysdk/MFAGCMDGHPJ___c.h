#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFAGCMDGHPJ;
namespace System { class Object; }

#define MFAGCMDGHPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9E6DB0)
#define MFAGCMDGHPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E6DF0)
#define MFAGCMDGHPJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E9E6E00)

inline static constexpr unsigned int MFAGCMDGHPJ___c_TypeDefinitionIndex = 28377;

	class MFAGCMDGHPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E650);
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
