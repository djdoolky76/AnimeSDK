#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCLNFODBDMH;
namespace System { class Object; }

#define BCLNFODBDMH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8DD680)
#define BCLNFODBDMH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8DD6C0)
#define BCLNFODBDMH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8DD6D0)

inline static constexpr unsigned int BCLNFODBDMH___c_TypeDefinitionIndex = 26363;

	class BCLNFODBDMH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50BC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCLNFODBDMH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLNFODBDMH___C_CTOR_OFFSET))(this);
		}

		::BCLNFODBDMH* __cctor_b__23_0()
		{
			return ((::BCLNFODBDMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLNFODBDMH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
