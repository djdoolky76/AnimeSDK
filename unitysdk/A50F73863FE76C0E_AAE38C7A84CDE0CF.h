#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int A50F73863FE76C0E_AAE38C7A84CDE0CF_TypeDefinitionIndex = 11793;

enum class A50F73863FE76C0E_AAE38C7A84CDE0CF : ::System::Int32
{
	unknownStage = 0,
	loginInvoke = 1,
	loginCaptchaRequired = 2,
	loginCaptchaCompleted = 3,
	loginVerificationRequired = 4,
	loginVerificationCompleted = 5,
	loginCompleted = 8,
	loginBindEmailRequired = 9,
	logoffInvoke = 1,
	logoffVerificationRequired = 2,
	logoffVerificationCompeted = 3,
	logoffCompleted = 6,
	otherLoginInvoke = 1,
	otherLoginVerificationRequired = 2,
	otherLoginVerificationCompleted = 3,
	otherLoginCompleted = 6,
	otherLoginBindEmailRequired = 7,
	verifyInvoke = 1,
	verifyCancelled = 3,
	verifyCompleted = 4,
	comboLoginRequestLogin = 2,
	comboLoginSuccessLogin = 3,
	comboLoginFailedLogin = 4,
	comboAgeGateInvoked = 1,
};
