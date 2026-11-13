#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCCIJHPLJOJ;
namespace System { class Object; }

#define BCCIJHPLJOJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA799C0)
#define BCCIJHPLJOJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA79A00)
#define BCCIJHPLJOJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FA79A10)

inline static constexpr unsigned int BCCIJHPLJOJ___c_TypeDefinitionIndex = 29891;

	class BCCIJHPLJOJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x452F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCCIJHPLJOJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCCIJHPLJOJ___C_CTOR_OFFSET))(this);
		}

		::BCCIJHPLJOJ* __cctor_b__33_0()
		{
			return ((::BCCIJHPLJOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCCIJHPLJOJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
