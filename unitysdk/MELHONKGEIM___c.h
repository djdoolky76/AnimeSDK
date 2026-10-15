#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MELHONKGEIM;
namespace System { class Object; }

#define MELHONKGEIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA10540)
#define MELHONKGEIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA10580)
#define MELHONKGEIM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA10590)

inline static constexpr unsigned int MELHONKGEIM___c_TypeDefinitionIndex = 34354;

	class MELHONKGEIM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MELHONKGEIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MELHONKGEIM___C_CTOR_OFFSET))(this);
		}

		::MELHONKGEIM* __cctor_b__28_0()
		{
			return ((::MELHONKGEIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MELHONKGEIM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
