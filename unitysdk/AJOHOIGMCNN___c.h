#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJOHOIGMCNN;
namespace System { class Object; }

#define AJOHOIGMCNN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20637510)
#define AJOHOIGMCNN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20637550)
#define AJOHOIGMCNN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x20637560)

inline static constexpr unsigned int AJOHOIGMCNN___c_TypeDefinitionIndex = 29371;

	class AJOHOIGMCNN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJOHOIGMCNN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOHOIGMCNN___C_CTOR_OFFSET))(this);
		}

		::AJOHOIGMCNN* __cctor_b__33_0()
		{
			return ((::AJOHOIGMCNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOHOIGMCNN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
