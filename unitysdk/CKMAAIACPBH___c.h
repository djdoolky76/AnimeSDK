#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKMAAIACPBH;
namespace System { class Object; }

#define CKMAAIACPBH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0BFB10)
#define CKMAAIACPBH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0BFB50)
#define CKMAAIACPBH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0BFB60)

inline static constexpr unsigned int CKMAAIACPBH___c_TypeDefinitionIndex = 27599;

	class CKMAAIACPBH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKMAAIACPBH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMAAIACPBH___C_CTOR_OFFSET))(this);
		}

		::CKMAAIACPBH* __cctor_b__23_0()
		{
			return ((::CKMAAIACPBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMAAIACPBH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
