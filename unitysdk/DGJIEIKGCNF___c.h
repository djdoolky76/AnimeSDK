#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGJIEIKGCNF;
namespace System { class Object; }

#define DGJIEIKGCNF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1827B0)
#define DGJIEIKGCNF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1827F0)
#define DGJIEIKGCNF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E182800)

inline static constexpr unsigned int DGJIEIKGCNF___c_TypeDefinitionIndex = 31987;

	class DGJIEIKGCNF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x303B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGJIEIKGCNF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJIEIKGCNF___C_CTOR_OFFSET))(this);
		}

		::DGJIEIKGCNF* __cctor_b__38_0()
		{
			return ((::DGJIEIKGCNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJIEIKGCNF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
