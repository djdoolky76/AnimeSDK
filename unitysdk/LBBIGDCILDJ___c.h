#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBBIGDCILDJ;
namespace System { class Object; }

#define LBBIGDCILDJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC15940)
#define LBBIGDCILDJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC15980)
#define LBBIGDCILDJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FC15990)

inline static constexpr unsigned int LBBIGDCILDJ___c_TypeDefinitionIndex = 29560;

	class LBBIGDCILDJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26DF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBBIGDCILDJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBIGDCILDJ___C_CTOR_OFFSET))(this);
		}

		::LBBIGDCILDJ* __cctor_b__28_0()
		{
			return ((::LBBIGDCILDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBIGDCILDJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
