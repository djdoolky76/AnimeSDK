#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIBKOLLMPMM;
namespace System { class Object; }

#define FIBKOLLMPMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2069AD20)
#define FIBKOLLMPMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2069AD60)
#define FIBKOLLMPMM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x2069AD70)

inline static constexpr unsigned int FIBKOLLMPMM___c_TypeDefinitionIndex = 27593;

	class FIBKOLLMPMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIBKOLLMPMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBKOLLMPMM___C_CTOR_OFFSET))(this);
		}

		::FIBKOLLMPMM* __cctor_b__18_0()
		{
			return ((::FIBKOLLMPMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBKOLLMPMM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
