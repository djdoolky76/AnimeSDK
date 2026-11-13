#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCIPKHCJLBM;
namespace System { class Object; }

#define JCIPKHCJLBM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2041C1E0)
#define JCIPKHCJLBM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2041C220)
#define JCIPKHCJLBM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x2041C230)

inline static constexpr unsigned int JCIPKHCJLBM___c_TypeDefinitionIndex = 31649;

	class JCIPKHCJLBM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C1A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCIPKHCJLBM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCIPKHCJLBM___C_CTOR_OFFSET))(this);
		}

		::JCIPKHCJLBM* __cctor_b__23_0()
		{
			return ((::JCIPKHCJLBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCIPKHCJLBM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
