#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIAHFIBLDLP;
namespace System { class Object; }

#define FIAHFIBLDLP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F699D10)
#define FIAHFIBLDLP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F699D50)
#define FIAHFIBLDLP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F699D60)

inline static constexpr unsigned int FIAHFIBLDLP___c_TypeDefinitionIndex = 34923;

	class FIAHFIBLDLP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x443C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIAHFIBLDLP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAHFIBLDLP___C_CTOR_OFFSET))(this);
		}

		::FIAHFIBLDLP* __cctor_b__33_0()
		{
			return ((::FIAHFIBLDLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAHFIBLDLP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
