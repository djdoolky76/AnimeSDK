#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHJANNIGCKM;
namespace System { class Object; }

#define HHJANNIGCKM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20512730)
#define HHJANNIGCKM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20512770)
#define HHJANNIGCKM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20512780)

inline static constexpr unsigned int HHJANNIGCKM___c_TypeDefinitionIndex = 29458;

	class HHJANNIGCKM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E2F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHJANNIGCKM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJANNIGCKM___C_CTOR_OFFSET))(this);
		}

		::HHJANNIGCKM* __cctor_b__28_0()
		{
			return ((::HHJANNIGCKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJANNIGCKM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
