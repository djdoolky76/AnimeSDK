#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DONCOCHMEBC;
namespace System { class Object; }

#define DONCOCHMEBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F75F060)
#define DONCOCHMEBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F75F0A0)
#define DONCOCHMEBC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F75F0B0)

inline static constexpr unsigned int DONCOCHMEBC___c_TypeDefinitionIndex = 28334;

	class DONCOCHMEBC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39170);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DONCOCHMEBC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONCOCHMEBC___C_CTOR_OFFSET))(this);
		}

		::DONCOCHMEBC* __cctor_b__23_0()
		{
			return ((::DONCOCHMEBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DONCOCHMEBC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
