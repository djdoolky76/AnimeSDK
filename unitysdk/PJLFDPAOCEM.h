#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMJIONEOLPP;
class JOBGHLBLKME;
namespace System { class String; }

#define PJLFDPAOCEM_JCNBIKCAHMJ_1_OFFSET UNITYSDK_OFFSET(0xC292430)
#define PJLFDPAOCEM_JCNBIKCAHMJ_2_OFFSET UNITYSDK_OFFSET(0xC292510)
#define PJLFDPAOCEM_JCNBIKCAHMJ_3_OFFSET UNITYSDK_OFFSET(0xC2926B0)
#define PJLFDPAOCEM_JCNBIKCAHMJ_OFFSET UNITYSDK_OFFSET(0xC292220)

inline static constexpr unsigned int PJLFDPAOCEM_TypeDefinitionIndex = 73424;

	class PJLFDPAOCEM : public ::System::Object
	{
	public:
		static ::System::String* JCNBIKCAHMJ(::AMJIONEOLPP* a1)
		{
			return ((::System::String*(*)(::AMJIONEOLPP*))((::PBYTE)hIl2Cpp + PJLFDPAOCEM_JCNBIKCAHMJ_OFFSET))(a1);
		}

		static ::System::String* JCNBIKCAHMJ_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PJLFDPAOCEM_JCNBIKCAHMJ_1_OFFSET))(a1, a2);
		}

		static ::System::String* JCNBIKCAHMJ_2(::JOBGHLBLKME* a1)
		{
			return ((::System::String*(*)(::JOBGHLBLKME*))((::PBYTE)hIl2Cpp + PJLFDPAOCEM_JCNBIKCAHMJ_2_OFFSET))(a1);
		}

		static ::System::String* JCNBIKCAHMJ_3(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + PJLFDPAOCEM_JCNBIKCAHMJ_3_OFFSET))(a1);
		}

	};
