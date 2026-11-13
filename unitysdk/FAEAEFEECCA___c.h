#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAEAEFEECCA;
namespace System { class Object; }

#define FAEAEFEECCA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F744BD0)
#define FAEAEFEECCA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F744C10)
#define FAEAEFEECCA___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F744C20)

inline static constexpr unsigned int FAEAEFEECCA___c_TypeDefinitionIndex = 29839;

	class FAEAEFEECCA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D2E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAEAEFEECCA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEAEFEECCA___C_CTOR_OFFSET))(this);
		}

		::FAEAEFEECCA* __cctor_b__18_0()
		{
			return ((::FAEAEFEECCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEAEFEECCA___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
