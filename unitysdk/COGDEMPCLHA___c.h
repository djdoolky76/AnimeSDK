#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COGDEMPCLHA;
namespace System { class Object; }

#define COGDEMPCLHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1061A0)
#define COGDEMPCLHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1061E0)
#define COGDEMPCLHA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1061F0)

inline static constexpr unsigned int COGDEMPCLHA___c_TypeDefinitionIndex = 29487;

	class COGDEMPCLHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E3D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COGDEMPCLHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COGDEMPCLHA___C_CTOR_OFFSET))(this);
		}

		::COGDEMPCLHA* __cctor_b__23_0()
		{
			return ((::COGDEMPCLHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + COGDEMPCLHA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
