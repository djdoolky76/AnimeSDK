#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHPHDNBNLPJ;
namespace System { class Object; }

#define AHPHDNBNLPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F52C570)
#define AHPHDNBNLPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F52C5A0)
#define AHPHDNBNLPJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F52C5B0)

inline static constexpr unsigned int AHPHDNBNLPJ___c_TypeDefinitionIndex = 30484;

	class AHPHDNBNLPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D620);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHPHDNBNLPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPHDNBNLPJ___C_CTOR_OFFSET))(this);
		}

		::AHPHDNBNLPJ* __cctor_b__23_0()
		{
			return ((::AHPHDNBNLPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPHDNBNLPJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
