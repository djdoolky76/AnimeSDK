#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCLGCOEMLIF;
namespace System { class Object; }

#define NCLGCOEMLIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE0F70)
#define NCLGCOEMLIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE0FB0)
#define NCLGCOEMLIF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EAE0FC0)

inline static constexpr unsigned int NCLGCOEMLIF___c_TypeDefinitionIndex = 31524;

	class NCLGCOEMLIF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCLGCOEMLIF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLGCOEMLIF___C_CTOR_OFFSET))(this);
		}

		::NCLGCOEMLIF* __cctor_b__18_0()
		{
			return ((::NCLGCOEMLIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLGCOEMLIF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
