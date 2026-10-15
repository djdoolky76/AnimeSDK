#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKAHKMNCFDN;
namespace System { class Object; }

#define IKAHKMNCFDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E66E3D0)
#define IKAHKMNCFDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E66E400)
#define IKAHKMNCFDN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E66E410)

inline static constexpr unsigned int IKAHKMNCFDN___c_TypeDefinitionIndex = 25875;

	class IKAHKMNCFDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4F850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKAHKMNCFDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKAHKMNCFDN___C_CTOR_OFFSET))(this);
		}

		::IKAHKMNCFDN* __cctor_b__28_0()
		{
			return ((::IKAHKMNCFDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKAHKMNCFDN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
