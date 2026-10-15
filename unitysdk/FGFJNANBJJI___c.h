#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGFJNANBJJI;
namespace System { class Object; }

#define FGFJNANBJJI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E34F260)
#define FGFJNANBJJI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E34F290)
#define FGFJNANBJJI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E34F2A0)

inline static constexpr unsigned int FGFJNANBJJI___c_TypeDefinitionIndex = 31337;

	class FGFJNANBJJI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x553E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGFJNANBJJI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFJNANBJJI___C_CTOR_OFFSET))(this);
		}

		::FGFJNANBJJI* __cctor_b__28_0()
		{
			return ((::FGFJNANBJJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFJNANBJJI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
