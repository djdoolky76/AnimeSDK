#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDNLGOOMBAG;
namespace System { class Object; }

#define CDNLGOOMBAG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E05DE30)
#define CDNLGOOMBAG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E05DE70)
#define CDNLGOOMBAG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E05DE80)

inline static constexpr unsigned int CDNLGOOMBAG___c_TypeDefinitionIndex = 34136;

	class CDNLGOOMBAG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF500);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDNLGOOMBAG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNLGOOMBAG___C_CTOR_OFFSET))(this);
		}

		::CDNLGOOMBAG* __cctor_b__28_0()
		{
			return ((::CDNLGOOMBAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNLGOOMBAG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
