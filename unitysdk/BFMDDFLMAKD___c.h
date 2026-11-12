#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFMDDFLMAKD;
namespace System { class Object; }

#define BFMDDFLMAKD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD2F230)
#define BFMDDFLMAKD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD2F270)
#define BFMDDFLMAKD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FD2F280)

inline static constexpr unsigned int BFMDDFLMAKD___c_TypeDefinitionIndex = 25997;

	class BFMDDFLMAKD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFMDDFLMAKD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMDDFLMAKD___C_CTOR_OFFSET))(this);
		}

		::BFMDDFLMAKD* __cctor_b__33_0()
		{
			return ((::BFMDDFLMAKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMDDFLMAKD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
