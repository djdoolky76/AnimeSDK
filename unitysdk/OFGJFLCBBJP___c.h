#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFGJFLCBBJP;
namespace System { class Object; }

#define OFGJFLCBBJP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE452B0)
#define OFGJFLCBBJP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE452F0)
#define OFGJFLCBBJP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE45300)

inline static constexpr unsigned int OFGJFLCBBJP___c_TypeDefinitionIndex = 27330;

	class OFGJFLCBBJP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFGJFLCBBJP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGJFLCBBJP___C_CTOR_OFFSET))(this);
		}

		::OFGJFLCBBJP* __cctor_b__28_0()
		{
			return ((::OFGJFLCBBJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGJFLCBBJP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
