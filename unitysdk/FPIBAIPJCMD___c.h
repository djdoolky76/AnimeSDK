#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPIBAIPJCMD;
namespace System { class Object; }

#define FPIBAIPJCMD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6F8B70)
#define FPIBAIPJCMD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6F8BA0)
#define FPIBAIPJCMD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F6F8BB0)

inline static constexpr unsigned int FPIBAIPJCMD___c_TypeDefinitionIndex = 30666;

	class FPIBAIPJCMD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPIBAIPJCMD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIBAIPJCMD___C_CTOR_OFFSET))(this);
		}

		::FPIBAIPJCMD* __cctor_b__33_0()
		{
			return ((::FPIBAIPJCMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIBAIPJCMD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
