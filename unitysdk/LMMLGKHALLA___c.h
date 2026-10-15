#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMMLGKHALLA;
namespace System { class Object; }

#define LMMLGKHALLA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9AC000)
#define LMMLGKHALLA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9AC030)
#define LMMLGKHALLA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9AC040)

inline static constexpr unsigned int LMMLGKHALLA___c_TypeDefinitionIndex = 28142;

	class LMMLGKHALLA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DD70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMMLGKHALLA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMLGKHALLA___C_CTOR_OFFSET))(this);
		}

		::LMMLGKHALLA* __cctor_b__33_0()
		{
			return ((::LMMLGKHALLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMLGKHALLA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
