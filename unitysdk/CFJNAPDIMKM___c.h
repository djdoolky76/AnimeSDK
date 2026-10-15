#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFJNAPDIMKM;
namespace System { class Object; }

#define CFJNAPDIMKM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E077E30)
#define CFJNAPDIMKM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E077E60)
#define CFJNAPDIMKM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E077E70)

inline static constexpr unsigned int CFJNAPDIMKM___c_TypeDefinitionIndex = 33025;

	class CFJNAPDIMKM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x120B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFJNAPDIMKM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFJNAPDIMKM___C_CTOR_OFFSET))(this);
		}

		::CFJNAPDIMKM* __cctor_b__23_0()
		{
			return ((::CFJNAPDIMKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFJNAPDIMKM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
