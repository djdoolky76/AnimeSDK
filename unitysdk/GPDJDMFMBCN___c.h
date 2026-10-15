#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPDJDMFMBCN;
namespace System { class Object; }

#define GPDJDMFMBCN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4CA0A0)
#define GPDJDMFMBCN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4CA0E0)
#define GPDJDMFMBCN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E4CA0F0)

inline static constexpr unsigned int GPDJDMFMBCN___c_TypeDefinitionIndex = 32244;

	class GPDJDMFMBCN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23A40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPDJDMFMBCN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDJDMFMBCN___C_CTOR_OFFSET))(this);
		}

		::GPDJDMFMBCN* __cctor_b__33_0()
		{
			return ((::GPDJDMFMBCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDJDMFMBCN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
