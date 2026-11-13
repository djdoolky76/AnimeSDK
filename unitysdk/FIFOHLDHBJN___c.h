#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIFOHLDHBJN;
namespace System { class Object; }

#define FIFOHLDHBJN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2069D4A0)
#define FIFOHLDHBJN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2069D4E0)
#define FIFOHLDHBJN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x2069D4F0)

inline static constexpr unsigned int FIFOHLDHBJN___c_TypeDefinitionIndex = 29311;

	class FIFOHLDHBJN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43780);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIFOHLDHBJN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFOHLDHBJN___C_CTOR_OFFSET))(this);
		}

		::FIFOHLDHBJN* __cctor_b__23_0()
		{
			return ((::FIFOHLDHBJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFOHLDHBJN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
