#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEOOJBGLBCF;
namespace System { class Object; }

#define HEOOJBGLBCF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5313E0)
#define HEOOJBGLBCF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E531420)
#define HEOOJBGLBCF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E531430)

inline static constexpr unsigned int HEOOJBGLBCF___c_TypeDefinitionIndex = 26375;

	class HEOOJBGLBCF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D9C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEOOJBGLBCF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOOJBGLBCF___C_CTOR_OFFSET))(this);
		}

		::HEOOJBGLBCF* __cctor_b__33_0()
		{
			return ((::HEOOJBGLBCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOOJBGLBCF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
