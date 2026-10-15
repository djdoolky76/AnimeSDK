#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHAKNKHBLBI;
namespace System { class Object; }

#define LHAKNKHBLBI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E95BA50)
#define LHAKNKHBLBI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E95BA90)
#define LHAKNKHBLBI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E95BAA0)

inline static constexpr unsigned int LHAKNKHBLBI___c_TypeDefinitionIndex = 26948;

	class LHAKNKHBLBI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x406F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHAKNKHBLBI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAKNKHBLBI___C_CTOR_OFFSET))(this);
		}

		::LHAKNKHBLBI* __cctor_b__33_0()
		{
			return ((::LHAKNKHBLBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAKNKHBLBI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
