#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAANKGHDHCB.h"
class FMMKENDGOPH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define HPMFJIBDNIK_CTOR_OFFSET UNITYSDK_OFFSET(0x15DD4BC0)
#define HPMFJIBDNIK_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x15DD4640)
#define HPMFJIBDNIK_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x15DD4BD0)
#define HPMFJIBDNIK_MAMCKKAGJLD_OFFSET UNITYSDK_OFFSET(0x15DD4650)
#define HPMFJIBDNIK_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x15DD4C10)
#define HPMFJIBDNIK_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15DD4C50)

inline static constexpr unsigned int HPMFJIBDNIK_TypeDefinitionIndex = 82288;

	class HPMFJIBDNIK : public ::KAANKGHDHCB
	{
	public:
		::FMMKENDGOPH* BGKEEIDDGOB; // 0x20
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + HPMFJIBDNIK_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_IsRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMFJIBDNIK_GET_ISRUNNING_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMFJIBDNIK_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMFJIBDNIK_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMFJIBDNIK_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Boolean MAMCKKAGJLD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMFJIBDNIK_MAMCKKAGJLD_OFFSET))(this);
		}

	};
