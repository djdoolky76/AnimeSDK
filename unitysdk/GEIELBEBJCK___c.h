#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEIELBEBJCK;
namespace System { class Object; }

#define GEIELBEBJCK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E42CC20)
#define GEIELBEBJCK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E42CC60)
#define GEIELBEBJCK___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E42CC70)

inline static constexpr unsigned int GEIELBEBJCK___c_TypeDefinitionIndex = 31969;

	class GEIELBEBJCK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11DF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEIELBEBJCK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIELBEBJCK___C_CTOR_OFFSET))(this);
		}

		::GEIELBEBJCK* __cctor_b__18_0()
		{
			return ((::GEIELBEBJCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIELBEBJCK___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
