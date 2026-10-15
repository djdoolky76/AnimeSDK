#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIMFFPGEPIO;
namespace System { class Object; }

#define PIMFFPGEPIO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF40950)
#define PIMFFPGEPIO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF40990)
#define PIMFFPGEPIO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DF409A0)

inline static constexpr unsigned int PIMFFPGEPIO___c_TypeDefinitionIndex = 30820;

	class PIMFFPGEPIO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35820);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIMFFPGEPIO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMFFPGEPIO___C_CTOR_OFFSET))(this);
		}

		::PIMFFPGEPIO* __cctor_b__33_0()
		{
			return ((::PIMFFPGEPIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMFFPGEPIO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
